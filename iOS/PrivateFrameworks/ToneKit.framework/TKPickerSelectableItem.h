//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem
{
    _Bool _shouldTintText;
    _Bool _showsCheckmark;
    _Bool _showsDisclosureIndicator;
    _Bool _shouldPreventSelection;
    NSString *_text;
    NSString *_detailText;
}

@property(nonatomic, setter=_setShouldPreventSelection:) _Bool shouldPreventSelection; // @synthesize shouldPreventSelection=_shouldPreventSelection;
@property(nonatomic, setter=_setShowsDisclosureIndicator:) _Bool showsDisclosureIndicator; // @synthesize showsDisclosureIndicator=_showsDisclosureIndicator;
@property(nonatomic, setter=_setShowsCheckmark:) _Bool showsCheckmark; // @synthesize showsCheckmark=_showsCheckmark;
@property(copy, nonatomic, setter=_setDetailText:) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic, setter=_setShouldTintText:) _Bool shouldTintText; // @synthesize shouldTintText=_shouldTintText;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;

@end

