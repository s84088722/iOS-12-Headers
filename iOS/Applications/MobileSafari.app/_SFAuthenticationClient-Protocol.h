//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, _SFAuthenticationContext;
@protocol _SFAuthenticationCustomUIProgressObserver;

@protocol _SFAuthenticationClient <NSObject>
- (_Bool)displayMessageAsTitleForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)passcodePromptForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)authenticationMessageForContext:(_SFAuthenticationContext *)arg1;
- (id <_SFAuthenticationCustomUIProgressObserver>)authenticationCustomUIProgressObserverForContext:(_SFAuthenticationContext *)arg1;
@end

