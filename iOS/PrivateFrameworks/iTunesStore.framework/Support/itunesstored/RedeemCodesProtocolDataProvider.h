//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DaemonProtocolDataProvider.h"

@class ISDialogButton;

@interface RedeemCodesProtocolDataProvider : DaemonProtocolDataProvider
{
    ISDialogButton *_dialogButton;
}

@property(retain) ISDialogButton *dialogButton; // @synthesize dialogButton=_dialogButton;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

