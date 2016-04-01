#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>

#import <Cordova/CDVPlugin.h>

@interface ImageDetectionPlugin : CDVPlugin <CvVideoCameraDelegate>
{
    UIImageView *img;
    CvVideoCamera *camera;
    CDVInvokedUrlCommand *_command;
}

@property (nonatomic, retain) CvVideoCamera *camera;
@property (nonatomic, retain) UIImageView *img;

- (void)greet:(CDVInvokedUrlCommand*)command;

- (void)isDetecting:(CDVInvokedUrlCommand*)command;

- (void)setPattern:(CDVInvokedUrlCommand*)command;

@end