//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView
{
    NSMutableArray *_roundedLabels;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *roundedLabels; // @synthesize roundedLabels=_roundedLabels;
- (void).cxx_destruct;
- (void)updateRoundedText:(id)arg1;
- (id)init;

@end

