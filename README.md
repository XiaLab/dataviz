## Documentation

## XXLibrary

XXLibrary is a high-performance cross-platform engine for comparative visualization and interactive exploration of diverse bioinformatics data.

todo add a pic

## Getting Started

- Visit the [Demo website]() and find out what you can do with XXLibrary.
- First time with XXLibrary? Read the [Overview](#overview) section below and then check out the Usages & Examples. 
- We provide tutorial for both [web developer](#for-web-developer) and [iOS developer](#for-ios-developer).
- Still need some help? Submit an issue on [Github](https://github.com/XiaLab/dataviz/issues) or contact us with email: contact@sciencewall.net 

## Overview

XXLibrary is a high-performance cross-platform engine for comparative visualization and interactive exploration of diverse bioinformatics data. Applications integrated with XXLibrary can interactively customize the presentation of user requirements on both web pages and mobile apps. 

Through more in-depth interaction attributes, users are capable of instantly operating on the ﬁgures and dynamically organizing the presentation to obtain highlight, comparison and other desired exhibitions. The high-performance visualization engine can be integrated in data analysis tools as a .lib document to facilitate bioinformatics research, and it is also designed to be accessible to a wide range of users, including bench biologists and bioinformaticians.

## For Web Developers

### Installing

if you use npm, just use the command `npm install Plot.js` to install the library.

Or you can directly use the script by adding this code to your html file. 

```html
<script src="http://www.sciencewall.net/plot.js"></script>
```

### API Document 

[More information](Web/README.md)

## For iOS Developers

### Requirements

XXLibarary requires iOS 9.0 and above.

Several third-party open source libraries are used within XXLibrary, including:

1. [Colours](https://github.com/bennyguitar/Colours) - Color Supporting
2. [Mantle](https://github.com/Mantle/Mantle) - JSON Supporting
3. [React Native](https://github.com/facebook/react-native) - If you wanna use JavaScript in our library

The following Cocoa frameworks must be linked into the application target for proper compilation:

1. GLKit.framework
2. OpenGLES.framework
3. QuartzCore.framework

### Installation

We compiled our library into a .a file and provide it's header files. Create a new project or open an existed project in Xcode, and import out static library with it's header files.

The recommended approach for installing third-party libraries is via the [CocoaPods](https://cocoapods.org/) package manager, as  it provides flexible dependency management and dead simple installation.

Create Podfile and input the follow text:

```shell
target "YOUR PROJECT" do
	platform:ios, '9.0'
	pod 'Mantle'
	pod 'Colours'
	
	pod 'React', :path => '../node_modules/react-native', :subspecs => [
        'Core',
        'CxxBridge', # Include this for RN >= 0.47
        'DevSupport', # Include this to enable In-App Devmenu if RN >= 0.43
        'RCTText',
        'RCTNetwork',
        'RCTWebSocket', # Needed for debugging
        'RCTAnimation', # Needed for FlatList and animations running on native UI thread
        # Add any other subspecs you want to use in your project
    ]
    pod 'yoga', :path => '../node_modules/react-native/ReactCommon/yoga'
    pod 'DoubleConversion', :podspec => '../node_modules/react-native/third-party-podspecs/DoubleConversion.podspec'
    pod 'glog', :podspec => '../node_modules/react-native/third-party-podspecs/glog.podspec'
    pod 'Folly', :podspec => '../node_modules/react-native/third-party-podspecs/Folly.podspec'
end
```

Install third-party libraries into your project:

```shell
$ pod install
```

ReOpen your project in Xcode from the .xcworkspace file.

Now add Cocoa framework to your project. Open your project and navigate to `Build Phases` page,and at the `Link Binary With Libraries` , add the following frameworks:

```
1. GLKit.framework
2. OpenGLES.framework
3. QuartzCore.framework
```

### Usage & Example

XXLibrary is easy to use for iOS developers. There are 4 major steps.

#### Prepare Bioinformatics Data

Prepare the data that needs to be displayed and decide which graph type the data will eventually be displayed. Our library can accept input files in a variety of formats, JSON, csv, tsv, dsv, and so on.

Take the following [segdup.csv](images/segdup.csv) file as an example.

````
chr,start,end
chr1,465,30596
chr1,486,76975
chr1,486,30596
chr1,486,9707
chr1,486,9707
chr1,486,9707
chr1,8256,76975
chr1,23908,30596
chr1,59871,76975
chr1,71096,76975
chr1,71096,76975
chr1,71096,76975
...
````

Each row of the file represents a chromosome fragment, and each row records the start and end of the chromosomal fragment. We hope that all the chromosome fragments are eventually displayed in the form of a band. So we decide to use a stack figure to draw the data.

#### Write Configuration Code

The differences between each chromosome fragment represented in the segdup.csv file are (i) start site and end site (ii) thelength of the fragment. 

In order to display each chromosome fragment in the correct position, we use the form of a stack figure. To quickly distinguish the chromosomal fragments, we use different colors to represent their different lengths.

The configuration file can be stored as a JSON file, or it can be written directly in the form of a Key-Value.

The following is the configuration code.

````objective-c
NSDictionary *configuration = @{
            @"innerRadius": @(0.7f),  // The starting position of the inner radius of Stack
            @"outerRadius": @(1.0f),  // The end of the outer radius of Stack
            @"color": ^NSString *(NSMutableDictionary *d) {
                CGFloat astart = [d[@"start"] floatValue]; // astart: start position
                CGFloat aend = [d[@"end"] floatValue]; // aend: end position
                if (aend - astart > 150000) {
                    return @"red";  // When the clip length is larger than 150000, the clip is displayed in red
                } else if (aend - astart > 120000) {
                    return @"#333"; // larger than 120000, in #333
                } else if (aend - astart > 90000) {
                    return @"#666"; // larger than 90000, in #666
                } else if (aend - astart > 60000) {
                    return @"#999"; // larger than 60000, in #999
                } else if (aend - astart > 30000) {
                    return @"#BBB"; // larger than 30000, in #BBB
                } else {
                    return nil;
                }
            },
            @"thickness": @(4.0f), // the width on the screen
};
````

#### Call APIs to Read Data and Draw figure

At [API Document](#api-document-1) section, we provide a lot of APIs, including: Reading data and Drawing figures.

- Call API to read segdup.csv data

  ````objective-c
  DFIDSV *parseCSV = [[DFIDSV alloc] initWithDelimiter:@","];
  [parseCSV parseWithTextFileName:@"segdup" andFileSuffix:@"csv"];
  DFIDSVParseResult *parseResult = parseCSV.result;
  ````

- Call API to draw stack figure

  ````objective-c
  DFICircosStack *stack = [[DFICircosStack alloc] initWithCircos:circos conf:conf data:preSegdup2];
  [stack renderToView:self.testView];
  ````

#### Run Xcode and check the result

### API Document

#### Base Shape

[Base Shape](iOS/README.md#base-shape) provide APIs to draw base shapes. 

#### Circular Shape

[Circular Shape](iOS/README.md#circular-shape) provide APIs to draw circular shapes and the circular shape's layout.

[More information](iOS/README.md)

## Performance Comparison

Please check out this page for [Performance Comparison](Performance.md).

## Credits

XXLibrary is brought to you by XiaLab.

If you have any questions, please contact contact@sciencewall.net
