//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@interface XCPointerEvent : NSObject <NSSecureCoding>
{
    unsigned long long _eventType;
    unsigned long long _buttonType;
    double _pressure;
    double _offset;
    struct CGPoint _coordinate;
}

+ (CDUnknownBlockType)offsetComparator;
+ (id)pointerEventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 pressure:(double)arg4 offset:(double)arg5;
+ (id)pointerEventWithType:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 coordinate:(struct CGPoint)arg3 offset:(double)arg4;
+ (_Bool)supportsSecureCoding;
@property double offset; // @synthesize offset=_offset;
@property double pressure; // @synthesize pressure=_pressure;
@property struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
@property unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
