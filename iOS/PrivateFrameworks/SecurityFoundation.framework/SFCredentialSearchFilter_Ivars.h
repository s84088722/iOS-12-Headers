//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter_Ivars : NSObject
{
    NSDate *minimumCreationDate;
    NSDate *maximumCreationDate;
    NSDate *minimumModificationDate;
    NSDate *maximumModificationDate;
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;
    NSArray *usernames;
}

- (void).cxx_destruct;

@end

