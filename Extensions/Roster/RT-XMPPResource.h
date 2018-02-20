#import <Foundation/Foundation.h>
#import "RT-XMPP.h"


@protocol XMPPResource <NSObject>
@required

- (XMPPJID *)jid;
- (XMPPPresence *)presence;

- (NSDate *)presenceDate;

- (NSComparisonResult)compare:(id <XMPPResource>)another;

@end
