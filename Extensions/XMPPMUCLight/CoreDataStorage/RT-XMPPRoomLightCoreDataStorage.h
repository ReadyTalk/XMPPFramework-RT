//
//  XMPPRoomLightCoreDataStorage.h
//  Mangosta
//
//  Created by Andres Canal on 6/8/16.
//  Copyright © 2016 Inaka. All rights reserved.
//

#import "RT-XMPP.h"
#import "RT-XMPPCoreDataStorage.h"
#import "RT-XMPPRoomLight.h"

@interface XMPPRoomLightCoreDataStorage : XMPPCoreDataStorage <XMPPRoomLightStorage>

- (void)handleIncomingMessage:(XMPPMessage *)message room:(XMPPRoomLight *)room;
- (void)handleOutgoingMessage:(XMPPMessage *)message room:(XMPPRoomLight *)room;

@end
