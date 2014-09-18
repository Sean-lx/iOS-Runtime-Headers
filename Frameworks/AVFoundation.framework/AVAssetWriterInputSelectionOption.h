/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    NSString *_extendedLanguageTag;
    AVAssetWriterInput *_input;
    NSString *_languageCode;
    NSString *_mediaType;
    NSArray *_metadata;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_trackReferences;
    bool_displaysNonForcedSubtitles;
    bool_enabled;
}

@property(readonly) bool displaysNonForcedSubtitles;
@property(readonly) NSString * extendedLanguageTag;
@property(readonly) AVAssetWriterInput * input;
@property(readonly) NSString * languageCode;
@property(readonly) NSString * mediaType;
@property(readonly) NSArray * metadata;
@property(readonly) NSDictionary * outputSettings;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(readonly) NSDictionary * trackReferences;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;

- (id)_ancillaryDescription;
- (bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (bool)_isAuxiliaryContent;
- (bool)_isDesignatedDefault;
- (bool)_isMainProgramContent;
- (id)_taggedCharacteristics;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (bool)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (void)finalize;
- (bool)hasMediaCharacteristic:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)outputSettings;
- (id)propertyList;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)trackReferences;

@end