//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC8FMClient12SearchResult : NSObject
{
    // Error parsing type: , name: devices
    // Error parsing type: , name: resultCode
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long resultCode; // @synthesize resultCode;
@property(nonatomic, copy) NSArray *devices; // @synthesize devices;

@end

