//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookRenderer-Protocol.h>

@class NSString;
@protocol SXQuickLookStyler;

@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer>
{
    id <SXQuickLookStyler> _styler;
}

@property(readonly, nonatomic) id <SXQuickLookStyler> styler; // @synthesize styler=_styler;
- (void).cxx_destruct;
- (void)renderErrorMessage:(id)arg1 view:(id)arg2;
- (void)renderThumbnailImage:(id)arg1 view:(id)arg2;
- (void)render:(id)arg1 attributes:(id)arg2;
- (id)initWithStyler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

