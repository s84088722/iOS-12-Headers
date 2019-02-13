//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSString;

@interface QLToolbarButtonOption : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_title;
    long long _style;
}

+ (_Bool)supportsSecureCoding;
@property long long style; // @synthesize style=_style;
@property(copy) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
