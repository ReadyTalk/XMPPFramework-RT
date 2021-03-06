#import <Foundation/Foundation.h>
#import "RT-XMPPMessage.h"


@interface XMPPMessage (XEP_0184)

- (BOOL)hasReceiptRequest;
- (BOOL)hasReceiptResponse;
- (NSString *)receiptResponseID;
- (XMPPMessage *)generateReceiptResponse;

- (void)addReceiptRequest;

@end
