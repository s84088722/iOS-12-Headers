//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/_GEODataSessionTaskRulesHelper.h>

__attribute__((visibility("hidden")))
@interface _GEODataSessionTaskRulesPreferType : _GEODataSessionTaskRulesHelper
{
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)dataTask:(id)arg1 didCompleteSubtask:(id)arg2;
- (_Bool)dataTask:(id)arg1 shouldStartSubtask:(id)arg2 ofType:(unsigned long long)arg3;
- (_Bool)dataTask:(id)arg1 shouldCreateSubtaskOfType:(unsigned long long)arg2 forRequest:(id)arg3;
- (id)initForType:(unsigned long long)arg1;

@end

