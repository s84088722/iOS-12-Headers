//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate
{
    CLKComplicationTemplateGraphicCircular *_circularTemplate;
    CLKTextProvider *_textProvider;
}

@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(copy, nonatomic) CLKComplicationTemplateGraphicCircular *circularTemplate; // @synthesize circularTemplate=_circularTemplate;
- (void).cxx_destruct;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

