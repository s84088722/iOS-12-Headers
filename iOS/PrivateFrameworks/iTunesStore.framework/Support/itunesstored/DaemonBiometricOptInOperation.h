//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation
{
    NSData *_authToken;
    _Bool _requiresStoreAuthentication;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
- (_Bool)_updateTouchIDSettingsForAccount:(id)arg1;
- (id)_authenticateWithAccount:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) CDUnknownBlockType resultBlock;
@property _Bool requiresStoreAuthentication;
- (id)init;

@end

