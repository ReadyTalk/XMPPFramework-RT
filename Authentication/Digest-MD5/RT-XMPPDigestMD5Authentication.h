#import <Foundation/Foundation.h>
#import "RT-XMPPSASLAuthentication.h"
#import "RT-XMPPStream.h"


@interface XMPPDigestMD5Authentication : NSObject <XMPPSASLAuthentication>

// This class implements the XMPPSASLAuthentication protocol.
// 
// See XMPPSASLAuthentication.h for more information.

@end

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@interface XMPPStream (XMPPDigestMD5Authentication)

- (BOOL)supportsDigestMD5Authentication;

@end
