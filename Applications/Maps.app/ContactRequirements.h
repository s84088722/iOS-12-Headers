//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ContactRequirements : NSObject
{
    _Bool _nameRequired;
    _Bool _phoneNumberRequired;
    _Bool _emailAddressRequired;
}

@property(readonly, nonatomic) _Bool emailAddressRequired; // @synthesize emailAddressRequired=_emailAddressRequired;
@property(readonly, nonatomic) _Bool phoneNumberRequired; // @synthesize phoneNumberRequired=_phoneNumberRequired;
@property(readonly, nonatomic) _Bool nameRequired; // @synthesize nameRequired=_nameRequired;
- (id)initWithNameRequired:(_Bool)arg1 phoneNumberRequired:(_Bool)arg2 emailAddressRequired:(_Bool)arg3;

@end
