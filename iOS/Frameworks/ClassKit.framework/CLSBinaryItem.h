//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassKit/CLSActivityItem.h>

@interface CLSBinaryItem : CLSActivityItem
{
    _Bool _value;
    long long _valueType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(nonatomic) _Bool value;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)_init;

@end

