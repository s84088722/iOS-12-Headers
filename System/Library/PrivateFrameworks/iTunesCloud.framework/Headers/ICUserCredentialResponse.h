//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICUserIdentityProperties;

@interface ICUserCredentialResponse : NSObject
{
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_iCloudIdentityProperties;
}

@property(copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties; // @synthesize iCloudIdentityProperties=_iCloudIdentityProperties;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
- (void).cxx_destruct;

@end
