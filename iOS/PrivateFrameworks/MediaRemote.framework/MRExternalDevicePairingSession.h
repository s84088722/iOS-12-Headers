//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRCryptoPairingSession.h>

@class MRCoreUtilsPairingSession, MRCryptoPairingSessionBlockDelegate;

@interface MRExternalDevicePairingSession : MRCryptoPairingSession
{
    MRCoreUtilsPairingSession *_pairingSession;
    MRCryptoPairingSessionBlockDelegate *_pairingDelegate;
}

@property(retain, nonatomic) MRCryptoPairingSessionBlockDelegate *pairingDelegate; // @synthesize pairingDelegate=_pairingDelegate;
@property(retain, nonatomic) MRCoreUtilsPairingSession *pairingSession; // @synthesize pairingSession=_pairingSession;
- (void).cxx_destruct;
- (_Bool)_useSystemPairing;
- (_Bool)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)close;
- (void)_openSecuritySessionInState:(unsigned long long)arg1 useSystemPairing:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)open;
- (void)setDelegate:(id)arg1;
- (id)updatePeer;
- (id)removePeer;
- (id)pairedDevices;
- (_Bool)isPaired;
- (_Bool)isValid;
@property(readonly, nonatomic, getter=isUsingSystemPairing) _Bool usingSystemPairing;
@property(readonly, nonatomic) _Bool hasExchangedMessage;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithDevice:(id)arg1;

@end

