//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>
#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying>
{
    double _duration;
    SUDOMElement *_sourceElement;
    long long _type;
}

+ (long long)transitionTypeFromString:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) SUDOMElement *sourceElement; // @synthesize sourceElement=_sourceElement;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

