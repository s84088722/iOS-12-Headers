//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CNApplicationProxy, NSData, NSDictionary, NSString, NSURL;

@protocol CNLaunchServicesAdapter
- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
- (void)openUserActivityData:(NSData *)arg1 inApplication:(CNApplicationProxy *)arg2 withReply:(void (^)(_Bool, NSError *))arg3;
- (void)applicationForBundleIdentifier:(NSString *)arg1 withReply:(void (^)(CNApplicationProxy *, NSError *))arg2;
- (void)applicationsAvailableForHandlingURLScheme:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)applicationsForUserActivityType:(NSString *)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
@end

