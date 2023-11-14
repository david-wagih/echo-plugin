#import <Cordova/CDVPlugin.h>

@interface MyCordovaPlugin : CDVPlugin
{}


// the hooks for our plugin commands

- (void)echo:(CDVInvokedUrlCommand*)command;
- (void)getDate:(CDVInvokedUrlCommand*)command;


@end
