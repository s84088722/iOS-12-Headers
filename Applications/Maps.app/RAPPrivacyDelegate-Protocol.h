//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol RAPPrivacyDelegate <NSObject>
- (void)presentPrivacyScreenForLocationOfInterestType:(long long)arg1 completion:(void (^)(_Bool, _Bool, NSString *))arg2;
- (void)presentPrivacyScreen:(void (^)(_Bool, _Bool, NSString *))arg1;
@end

