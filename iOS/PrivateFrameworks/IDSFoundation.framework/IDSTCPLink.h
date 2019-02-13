//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/IDSLink-Protocol.h>

@class NSString;
@protocol IDSLinkDelegate;

@interface IDSTCPLink : NSObject <IDSLink>
{
    int _addressFamily;
    _Bool _isSSL;
    struct IDSTCPConnection_ *_conns;
    CDUnknownBlockType _getPacketLength;
    struct IDSTCPLinkCounter_ _counters;
    struct IDSTCPLinkCounter_ _previousCounters;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
    unsigned long long _state;
}

@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool isSSL; // @synthesize isSSL=_isSSL;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
- (void).cxx_destruct;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(_Bool)arg2;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_c4cff10b *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (void)processIncomingPacket:(CDStruct_c4cff10b *)arg1;
- (_Bool)disconnect:(struct sockaddr_in *)arg1 remoteAddress:(struct sockaddr_in *)arg2;
- (_Bool)connect:(int)arg1 localAddress:(struct sockaddr_in *)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr_in *)arg4 clientUUID:(unsigned char [16])arg5 completionHandler:(CDUnknownBlockType)arg6;
- (struct IDSTCPConnection_ *)_getIDSTCPConnection:(CDStruct_c4cff10b *)arg1;
- (long long)getPacketLength:(CDStruct_c4cff10b *)arg1 isChannelData:(_Bool *)arg2;
- (id)copyLinkStatsDict;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(_Bool)arg3 getPacketLength:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

