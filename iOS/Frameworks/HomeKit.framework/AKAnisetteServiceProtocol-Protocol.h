//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSString;

@protocol AKAnisetteServiceProtocol
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;
- (void)eraseAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)syncAnisetteWithSIMData:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)provisionAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

