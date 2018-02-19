///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if TARGET_OS_IPHONE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#import <UIKit/UIKit.h>
#import "TestCapabilitiesHashingViewController.h"

@class XMPPCapabilities;

@interface TestCapabilitiesHashingAppDelegate : NSObject <UIApplicationDelegate>
{
	XMPPCapabilities *capabilities;
	
	UIWindow *window;
	TestCapabilitiesHashingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet TestCapabilitiesHashingViewController *viewController;

@end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#else
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#import <Cocoa/Cocoa.h>

@class XMPPCapabilities;

@interface TestCapabilitiesHashingAppDelegate : NSObject <NSApplicationDelegate>
{
	XMPPCapabilities *capabilities;
	
    __unsafe_unretained NSWindow *window;
}

@property (unsafe_unretained) IBOutlet NSWindow *window;

@end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
