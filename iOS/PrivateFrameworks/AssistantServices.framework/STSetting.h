//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STSetting : STSiriModelObject
{
    long long _type;
    id _value;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

