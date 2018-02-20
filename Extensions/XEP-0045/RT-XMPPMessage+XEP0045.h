#import <Foundation/Foundation.h>
#import "RT-XMPPMessage.h"


@interface XMPPMessage(XEP0045)

- (BOOL)isGroupChatMessage;
- (BOOL)isGroupChatMessageWithBody;
- (BOOL)isGroupChatMessageWithSubject;

@end
