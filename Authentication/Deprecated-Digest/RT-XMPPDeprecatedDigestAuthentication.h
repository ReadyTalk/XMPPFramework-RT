#import <Foundation/Foundation.h>
#import "RT-XMPPSASLAuthentication.h"
#import "RT-XMPPStream.h"


@interface XMPPDeprecatedDigestAuthentication : NSObject <XMPPSASLAuthentication>

// This class implements the XMPPSASLAuthentication protocol.
// 
// See XMPPSASLAuthentication.h for more information.

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@interface XMPPStream (XMPPDeprecatedDigestAuthentication)

- (BOOL)supportsDeprecatedDigestAuthentication;

@end
