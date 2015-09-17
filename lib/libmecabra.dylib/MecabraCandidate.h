/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property (nonatomic, readonly) NSString *analysisString;
@property (nonatomic, readonly) NSString *convertedAnalysisString;
@property (nonatomic, readonly) NSString *dictionaryReading;
@property (nonatomic, readonly) BOOL isAutocorrectedCandidate;
@property (nonatomic, readonly) BOOL isConversionCandidate;
@property (nonatomic, readonly) BOOL isEmojiCandidate;
@property (nonatomic, readonly) BOOL isExtensionCandidate;
@property (nonatomic, readonly) BOOL isFuzzyMatchCandidate;
@property (nonatomic, readonly) BOOL isLearningDictionaryCandidate;
@property (nonatomic, readonly) BOOL isPersonName;
@property (nonatomic, readonly) BOOL isPredictionCandidate;
@property (nonatomic, readonly) BOOL isSyntheticCandidate;
@property (nonatomic, readonly) BOOL isUserWordCandidate;
@property (nonatomic, readonly) struct MecabraCandidateBase { int (**x1)(); int x2; }*rawCandidate;
@property (nonatomic, readonly) struct ConversionCandidate { int (**x1)(); int x2; }*rawConversionCandidate;
@property (nonatomic, readonly) NSString *surface;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) unsigned int wordCount;

+ (id)syntheticCandidateFromWords:(id)arg1 withLexicon:(struct Lexicon { int (**x1)(); void *x2; void *x3; }*)arg2 language:(int)arg3;

- (id)analysisString;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (struct __CFArray { }*)copySyllableLengthArrayForWordAtIndex:(unsigned int)arg1;
- (struct __CFArray { }*)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInDictionaryReading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryReading;
- (id)initWithCandidate:(struct MecabraCandidateBase { int (**x1)(); int x2; }*)arg1;
- (BOOL)isAutocorrectedCandidate;
- (BOOL)isConversionCandidate;
- (BOOL)isEmojiCandidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExtensionCandidate;
- (BOOL)isFuzzyMatchCandidate;
- (BOOL)isLearningDictionaryCandidate;
- (BOOL)isPersonName;
- (BOOL)isPredictionCandidate;
- (BOOL)isSyntheticCandidate;
- (BOOL)isUserWordCandidate;
- (unsigned short)kind;
- (unsigned short)lastPrefixValue;
- (unsigned short)lcAttrAtIndex:(unsigned int)arg1;
- (unsigned short)matchType;
- (unsigned short)matchedLengthType;
- (long)phraseBoundaryAfterWordAtIndex:(long)arg1;
- (struct MecabraCandidateBase { int (**x1)(); int x2; }*)rawCandidate;
- (struct ConversionCandidate { int (**x1)(); int x2; }*)rawConversionCandidate;
- (unsigned short)rcAttrAtIndex:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (id)surface;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (unsigned int)trieValueAtIndex:(unsigned int)arg1;
- (int)type;
- (int)weight;
- (unsigned int)wordCount;
- (id)wordIDs;
- (BOOL)wordIsFromSystemDictionaryAtIndex:(unsigned int)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned int)arg1;
- (struct { int x1; int x2; })wordRangeAtIndex:(long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned int)arg1;
- (id)wordReadings;
- (id)words;

@end