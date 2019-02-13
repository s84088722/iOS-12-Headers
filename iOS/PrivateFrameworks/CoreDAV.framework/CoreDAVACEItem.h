//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVDenyItem, CoreDAVGrantItem, CoreDAVInvertItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVPrincipalItem;

@interface CoreDAVACEItem : CoreDAVItem
{
    CoreDAVPrincipalItem *_principal;
    CoreDAVInvertItem *_invert;
    CoreDAVGrantItem *_grant;
    CoreDAVDenyItem *_deny;
    CoreDAVItemWithNoChildren *_protectedItem;
    CoreDAVItemWithHrefChildItem *_inherited;
}

+ (id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2;
+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *inherited; // @synthesize inherited=_inherited;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *protectedItem; // @synthesize protectedItem=_protectedItem;
@property(retain, nonatomic) CoreDAVDenyItem *deny; // @synthesize deny=_deny;
@property(retain, nonatomic) CoreDAVGrantItem *grant; // @synthesize grant=_grant;
@property(retain, nonatomic) CoreDAVInvertItem *invert; // @synthesize invert=_invert;
@property(retain, nonatomic) CoreDAVPrincipalItem *principal; // @synthesize principal=_principal;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (id)description;
- (id)initWithPrincipal:(id)arg1 shouldInvert:(_Bool)arg2 action:(int)arg3 withPrivileges:(id)arg4;
- (id)init;

@end

