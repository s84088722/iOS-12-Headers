//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKNumberFormatter-Protocol.h>

@class NSDictionary, NSString;

@interface HKEnumeratedDisplayTypeNumberFormatter : NSObject <HKNumberFormatter>
{
    NSDictionary *_valueLabels;
}

- (void).cxx_destruct;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)initWithDisplayType:(id)arg1;
- (_Bool)returnsUnitWithValueForDisplay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

