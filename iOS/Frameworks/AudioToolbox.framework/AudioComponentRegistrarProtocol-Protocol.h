//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol AudioComponentRegistrarProtocol
- (void)getComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(_Bool)arg3 reply:(void (^)(NSData *, NSData *, NSArray *, _Bool))arg4;
@end

