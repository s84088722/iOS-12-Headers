//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAction.h"

__attribute__((visibility("hidden")))
@interface SearchSelectionAction : MapsAction
{
    unsigned long long _selectedIndex;
}

@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (_Bool)isCompatibleWithNavigation;
- (id)initWithSelectedIndex:(unsigned long long)arg1;

@end

