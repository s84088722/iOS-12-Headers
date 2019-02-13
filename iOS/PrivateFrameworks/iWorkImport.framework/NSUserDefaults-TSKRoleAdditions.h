//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (TSKRoleAdditions)
- (void)tsk_setBool:(_Bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)tsk_setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (_Bool)tsk_boolForKeyInCurrentRole:(id)arg1;
- (double)tsk_doubleForKeyInCurrentRole:(id)arg1;
- (float)tsk_floatForKeyInCurrentRole:(id)arg1;
- (long long)tsk_integerForKeyInCurrentRole:(id)arg1;
- (id)tsk_dataForKeyInCurrentRole:(id)arg1;
- (id)tsk_dictionaryForKeyInCurrentRole:(id)arg1;
- (id)tsk_arrayForKeyInCurrentRole:(id)arg1;
- (id)tsk_stringForKeyInCurrentRole:(id)arg1;
- (void)tsk_removeObjectForKeyInCurrentRole:(id)arg1;
- (void)tsk_setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (id)tsk_objectForKeyInCurrentRole:(id)arg1;
- (void)tsk_setBool:(_Bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)tsk_setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (_Bool)tsk_boolForKey:(id)arg1 inRole:(id)arg2;
- (double)tsk_doubleForKey:(id)arg1 inRole:(id)arg2;
- (float)tsk_floatForKey:(id)arg1 inRole:(id)arg2;
- (long long)tsk_integerForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dataForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)tsk_stringForKey:(id)arg1 inRole:(id)arg2;
- (void)tsk_removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)tsk_setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (id)tsk_objectForKey:(id)arg1 inRole:(id)arg2;
- (id)tskp_currentRole;
- (id)tsk_keyForRole:(id)arg1;
@end

