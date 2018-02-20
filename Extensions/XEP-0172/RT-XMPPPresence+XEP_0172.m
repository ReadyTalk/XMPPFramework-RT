#import "RT-XMPPPresence+XEP_0172.h"
#import "RT-NSXMLElement+XMPP.h"

#define XMLNS_NICK @"http://jabber.org/protocol/nick"

@implementation XMPPPresence (XEP_0172)

- (NSString *)nick{
	return [[self elementForName:@"nick" xmlns:XMLNS_NICK] stringValue];
}

@end
