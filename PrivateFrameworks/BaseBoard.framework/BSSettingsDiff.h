/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettingsDiff : NSObject <BSXPCCoding, NSCopying> {
    BSMutableSettings * _changes;
    <BSSettingDescriptionProvider> * _descriptionProvider;
    NSHashTable * _flagRemovals;
    NSHashTable * _objectRemovals;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (readonly) Class superclass;

+ (id)_newHashTableWithInitialCapacity:(unsigned long long)arg1;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (void)_enumerateSettingsInTable:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_initWithChanges:(id)arg1 flagRemovals:(id)arg2 objectRemovals:(id)arg3;
- (id)allSettings;
- (void)applyToSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id /* block */)arg1;
- (bool)isEmpty;
- (void)setDescriptionProvider:(id)arg1;

@end
