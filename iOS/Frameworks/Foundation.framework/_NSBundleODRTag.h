//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@interface _NSBundleODRTag : NSObject <NSSecureCoding>
{
    double _preservationPriority;
    _Bool _alwaysPreserved;
}

+ (_Bool)supportsSecureCoding;
@property _Bool alwaysPreserved; // @synthesize alwaysPreserved=_alwaysPreserved;
@property double preservationPriority; // @synthesize preservationPriority=_preservationPriority;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

