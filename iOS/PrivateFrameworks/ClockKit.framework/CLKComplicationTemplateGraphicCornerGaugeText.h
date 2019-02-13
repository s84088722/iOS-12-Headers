//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeText : CLKComplicationTemplate
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKTextProvider *_outerTextProvider;
}

@property(copy, nonatomic) CLKTextProvider *outerTextProvider; // @synthesize outerTextProvider=_outerTextProvider;
@property(copy, nonatomic) CLKTextProvider *trailingTextProvider; // @synthesize trailingTextProvider=_trailingTextProvider;
@property(copy, nonatomic) CLKTextProvider *leadingTextProvider; // @synthesize leadingTextProvider=_leadingTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void).cxx_destruct;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

