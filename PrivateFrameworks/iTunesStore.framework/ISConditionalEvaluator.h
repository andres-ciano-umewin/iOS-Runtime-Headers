/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISConditionalEvaluator : NSObject {
    NSDictionary *_dictionary;
}

- (BOOL)_checkConditions:(id)arg1 withOperator:(id)arg2;
- (NSInteger)_logicalOperatorForString:(id)arg1;
- (void)dealloc;
- (id)dictionaryByEvaluatingConditions;
- (id)initWithDictionary:(id)arg1;

@end