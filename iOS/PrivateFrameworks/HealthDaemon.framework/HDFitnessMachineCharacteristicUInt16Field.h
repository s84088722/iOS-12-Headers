//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicUInt16Field : HDFitnessMachineCharacteristicField
{
    unsigned short _value;
}

@property(nonatomic) unsigned short value; // @synthesize value=_value;
- (id)valueAsData;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;

@end

