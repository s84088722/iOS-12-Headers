//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDDisplayTypeAddDataViewController.h"

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController
{
    WDAddDataManualEntryItem *_heightPickerManualEntryItem;
}

- (void).cxx_destruct;
- (id)_inchUnitString;
- (id)_feetUnitString;
- (_Bool)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)createValueFieldManualEntryItem;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end

