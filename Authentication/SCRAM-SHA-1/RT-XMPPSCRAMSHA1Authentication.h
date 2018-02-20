//
//  XMPPSCRAMSHA1Authentication.h
//  iPhoneXMPP
//
//  Created by David Chiles on 3/21/14.
//
//

#import <Foundation/Foundation.h>
#import "RT-XMPPSASLAuthentication.h"
#import "RT-XMPPStream.h"

@interface XMPPSCRAMSHA1Authentication : NSObject <XMPPSASLAuthentication>

@end

@interface XMPPStream (XMPPSCRAMSHA1Authentication)

- (BOOL)supportsSCRAMSHA1Authentication;

@end
