//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

__attribute__((visibility("hidden")))
@interface MCManagedMediaPayload : MCPayload
{
    MCBook *_managedBook;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) MCBook *managedBook; // @synthesize managedBook=_managedBook;
- (void).cxx_destruct;
- (id)title;
- (id)initWithManagedMedia:(id)arg1 profile:(id)arg2;

@end

