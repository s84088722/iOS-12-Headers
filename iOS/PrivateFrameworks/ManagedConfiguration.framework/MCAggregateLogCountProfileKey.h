//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCountProfileKey : MCAggregateLogKey
{
    unsigned long long _type;
}

+ (void)updateProfileCounts;
+ (id)_type:(unsigned long long)arg1;
+ (id)encrypted;
+ (id)signedByApple;
+ (id)signed;
+ (id)carrier;
+ (id)all;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)value;
- (id)name;

@end

