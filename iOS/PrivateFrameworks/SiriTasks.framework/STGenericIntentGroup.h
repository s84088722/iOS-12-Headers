//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriTasks/NSSecureCoding-Protocol.h>

@class NSString;

@interface STGenericIntentGroup : NSObject <NSSecureCoding>
{
    NSString *_name;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

