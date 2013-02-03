/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class UIView<UITextSelectingContainer>, NSString;

@interface NSObject <NSObject> {
    Class isa;
}

@property(readonly) UIView<UITextSelectingContainer> * _textSelectingContainer;
@property struct CGPoint { float x1; float x2; } accessibilityActivationPoint;
@property BOOL accessibilityElementsHidden;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } accessibilityFrame;
@property(copy) NSString * accessibilityHint;
@property(copy) NSString * accessibilityLabel;
@property(retain) NSString * accessibilityLanguage;
@property unsigned long long accessibilityTraits;
@property(copy) NSString * accessibilityValue;
@property BOOL accessibilityViewIsModal;
@property BOOL isAccessibilityElement;

+ (int (*)())CA_getterForType:(int)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)CA_encodePropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (void)_accessibilityCalDetailStringForEvent:(id)arg1 inDateString:(id*)arg2 inTimeString:(id*)arg3;
+ (void)_accessibilityCalGetHourDesignatorsForAM:(id*)arg1 andPM:(id*)arg2;
+ (BOOL)_accessibilityCalHourDesignatorsAreBeforeHour;
+ (BOOL)_accessibilityCalShow24Hours;
+ (BOOL)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+ (id)_accessibilityStringForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
+ (id)_accessibilityStringForDayOfWeek:(int)arg1;
+ (id)_accessibilityTextChecker;
+ (id)_copyDescription;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (void)_installAppearanceSwizzleForSetter:(id)arg1;
+ (BOOL)_isDeallocating;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)arg1;
+ (BOOL)_tryRetain;
+ (id)_webkit_invokeOnMainThread;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)accessibilityBundles;
+ (void)accessibilityInitializeBundle;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)allowsWeakReference;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)autorelease;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (Class)class;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)finalize;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned int)hash;
+ (BOOL)implementsSelector:(SEL)arg1;
+ (id)init;
+ (void)initialize;
+ (void)initialize;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesImplementSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isFault;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)mf_clearLocks;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (BOOL)overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (BOOL)overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
+ (id)performSelector:(SEL)arg1;
+ (void)performSelectorWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
+ (oneway void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned int)retainCount;
+ (BOOL)retainWeakReference;
+ (id)self;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(int)arg1;
+ (Class)superclass;
+ (int)version;
+ (struct _NSZone { }*)zone;

- (int (*)())methodForSelector:(SEL)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (void)CA_prepareRenderValue;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)_ICSStringWithOptions:(unsigned int)arg1;
- (BOOL)__accessibilityReadAllOnFocus;
- (void)__accessibilityUnregister:(id)arg1;
- (struct CGPoint { float x1; float x2; })__accessibilityVisibleScrollArea:(BOOL)arg1;
- (void)__crossedTimeMarkerNotification:(id)arg1;
- (id)__im_afterDelay:(double)arg1;
- (id)__im_getInvocation:(id*)arg1;
- (id)__im_onDetachedThread;
- (id)__im_onMainThread;
- (id)__im_onMainThreadIfNecessary;
- (id)__im_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2;
- (id)__im_onThread:(id)arg1;
- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (float)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityAncestry;
- (BOOL)_accessibilityAnimationsInProgress;
- (id)_accessibilityApplication;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityBackingElementIsValid;
- (id)_accessibilityBaseHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityBookShowsDualPages;
- (BOOL)_accessibilityBoolValueForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_accessibilityCameraIrisOpen;
- (BOOL)_accessibilityCanDismissPopoverController:(id)arg1;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityClassicModeFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainingParentForOrdering;
- (struct CGPoint { float x1; float x2; })_accessibilityConvertPointToViewSpace:(struct CGPoint { float x1; float x2; })arg1;
- (void)_accessibilityCut;
- (id)_accessibilityDOMAttributes;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { float x1; float x2; })arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityDelete;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (void)_accessibilityFinalize;
- (id)_accessibilityFindDescendant:(id)arg1;
- (void)_accessibilityFindSearchResult:(BOOL)arg1 withString:(id)arg2;
- (id)_accessibilityFuzzyHitTestElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityGesturePracticeRegion;
- (void)_accessibilityHandleATFocused:(BOOL)arg1;
- (BOOL)_accessibilityHasDescendantOfType:(Class)arg1;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 withEvent:(id)arg3;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (int)_accessibilityIndexForPickerString:(id)arg1;
- (id)_accessibilityInputIdentifierForKeyboard;
- (int)_accessibilityIntegerValueForKey:(id)arg1;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsAwayAlertElementNew;
- (BOOL)_accessibilityIsDescendantOfElement:(id)arg1;
- (BOOL)_accessibilityIsFirstElementForFocus;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (BOOL)_accessibilityIsInAppSwitcher;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsMainWindow;
- (BOOL)_accessibilityIsNotFirstElement;
- (BOOL)_accessibilityIsTableCell;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityIsTouchContainer;
- (BOOL)_accessibilityIsVisible;
- (id)_accessibilityKeyboardKeyEnteredString;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (int)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityLineRangeForPosition:(unsigned int)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (int)_accessibilityLineStartPosition;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (float)_accessibilityMaxValue;
- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (float)_accessibilityMinValue;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (BOOL)_accessibilityObscuresScreen;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (id)_accessibilityPageContent;
- (int)_accessibilityPageControlCount;
- (int)_accessibilityPageControlIndex;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityParentView;
- (void)_accessibilityPaste;
- (BOOL)_accessibilityPerformEscape;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForTextMarker:(id)arg1;
- (BOOL)_accessibilityReadAllContinuesWithScroll;
- (BOOL)_accessibilityReadAllOnFocus;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (void)_accessibilityRemoveValueForKey:(id)arg1;
- (void)_accessibilityReplace;
- (void)_accessibilityResetContainerElements;
- (id)_accessibilityResponderElement;
- (id)_accessibilityScrollParent;
- (id)_accessibilityScrollStatus;
- (void)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedNSRangeForObject;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetAnimationsInProgress:(BOOL)arg1;
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (void)_accessibilitySetCameraIrisOpen:(BOOL)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_accessibilitySetUserTestingIsCancelButton:(BOOL)arg1;
- (void)_accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(int)arg3;
- (void)_accessibilitySetValue:(id)arg1;
- (BOOL)_accessibilityShouldAvoidAnnouncing;
- (BOOL)_accessibilityShouldReleaseAfterUnregistration;
- (BOOL)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTableViewCellWithRowIndex:(int)arg1 andColumn:(int)arg2;
- (id)_accessibilityTextChecker;
- (id)_accessibilityTextMarkerForPosition:(int)arg1;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (BOOL)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTouchContainer;
- (id)_accessibilityUnignoredDescendant;
- (void)_accessibilityUnregister;
- (unsigned int)_accessibilityUnsignedIntegerValueForKey:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingElementAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityUserTestingElementType;
- (BOOL)_accessibilityUserTestingIsBackNavButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityUserTestingParent;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityValueForKey:(id)arg1;
- (id)_accessibilityValueForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (struct CGPoint { float x1; float x2; })_accessibilityVisibleScrollArea:(BOOL)arg1;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)_accessibilityWindowVisible;
- (id)_accessibiltyAvailableKeyplanes;
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)_axDebugTraits;
- (id)_axSuperviews;
- (unsigned long)_cfTypeID;
- (void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(id)arg4;
- (void)_changeValueForKey:(id)arg1 usingBlock:(id)arg2;
- (unsigned long)_characterAfterCaretSelection;
- (unsigned long)_characterBeforeCaretSelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (id)_copyDescription;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_didChangeValuesForKeys:(id)arg1;
- (void)_disableScrollingIfNecessary;
- (void)_enableScrollingIfNecessary;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(BOOL)arg4;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(BOOL)arg2;
- (id)_gkAuthenticatedPlayerID;
- (void)_gkSetupAccountWithParamaters:(id)arg1 completionHandler:(id)arg2;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (id)_implicitObservationInfo;
- (int)_indexForTextPosition:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isEmptySelection;
- (BOOL)_isKVOA;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (BOOL)_mapkit_internalAnnotationAllowsCustomView;
- (BOOL)_mapkit_isInternalAnnotation;
- (BOOL)_mapkit_isInternalAnnotationView;
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (id)_mf_lockOrderingForType:(int)arg1;
- (BOOL)_mf_ntsIsLocked;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_nonRetainingPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectContainingCaretSelection;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (id)_safeValueForKey:(id)arg1;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)_selectableText;
- (int)_selectionAffinity;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectionAsNSRange;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (void)_setAccessibilityIsIgnored:(BOOL)arg1;
- (void)_setAccessibilityIsMainWindow:(BOOL)arg1;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)arg1;
- (void)_setAccessibilityObscuresScreen:(BOOL)arg1;
- (void)_setAccessibilityServesAsContainingParentForOrdering:(BOOL)arg1;
- (void)_setAccessibilityServesAsFirstElement:(BOOL)arg1;
- (void)_setAccessibilityWindowVisible:(BOOL)arg1;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (id)_textColorForCaretSelection;
- (id)_textSelectingContainer;
- (BOOL)_tryRetain;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_webkit_invokeOnMainThread;
- (void)_willChangeValuesForKeys:(id)arg1;
- (id)_wordContainingCaretSelection;
- (void)accessibilityActivate;
- (struct CGPoint { float x1; float x2; })accessibilityActivationPoint;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (id)accessibilityAttributeValue:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityColumnRange;
- (int)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainer;
- (id)accessibilityContainerElements;
- (id)accessibilityContentForLineNumber:(int)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotorItemsAtIndex:(int)arg1;
- (id)accessibilityCustomRotorTitles;
- (void)accessibilityDecrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (int)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (BOOL)accessibilityElementIsFocused;
- (BOOL)accessibilityElementIsFocused;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityFlowToElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrameForLineNumber:(int)arg1;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityIsComboBox;
- (id)accessibilityLabel;
- (id)accessibilityLabelForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)accessibilityLanguage;
- (int)accessibilityLineNumberForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityLinkedElement;
- (id)accessibilityMenuActions;
- (id)accessibilityPageContent;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;
- (BOOL)accessibilityPerformCustomAction:(int)arg1;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityPlaceholderValue;
- (BOOL)accessibilityRequired;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityRowRange;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (id)accessibilitySpeechHint;
- (BOOL)accessibilityStartStopToggle;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)accessibilityTitleElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityUserDefinedIsIgnored;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsContainingParentForOrdering;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedWindowVisible;
- (id)accessibilityValue;
- (BOOL)accessibilityViewIsModal;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)allowSafePerformSelector;
- (BOOL)allowsWeakReference;
- (BOOL)allowsWeakReference;
- (void)appendJsonStringToString:(id)arg1;
- (id)autoContentAccessingProxy;
- (id)autorelease;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)awakeFromNib;
- (long)becomeActive;
- (long)becomeInactive;
- (id)blockingMainThreadProxy;
- (Class)class;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copy;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)deepMutableObject;
- (unsigned long long)defaultAccessibilityTraits;
- (id)delayedProxy:(double)arg1;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)disallowSafePerformSelector;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (void)handleFailoversForClassNamed:(id)arg1;
- (unsigned int)hash;
- (BOOL)implementsSelector:(SEL)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)init;
- (BOOL)isAXAttributedString;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElementByDefault;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)isAccessibilityUserDefinedWindow;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSDate__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSNumber__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSString__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (BOOL)isNull;
- (BOOL)isNull;
- (BOOL)isProxy;
- (id)mainThreadProxy;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mf_exclusiveLocks;
- (void)mf_lock;
- (id)mf_lockOrdering;
- (void)mf_lockWithPriority;
- (void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)mf_strictLockOrdering;
- (BOOL)mf_tryLock;
- (BOOL)mf_tryLockWithPriority;
- (void)mf_unlock;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableCopy;
- (id)mutableOrderedSetValueForKey:(id)arg1;
- (id)mutableOrderedSetValueForKeyPath:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)okToNotifyFromThisThread;
- (id)pep_afterDelay:(double)arg1;
- (id)pep_getInvocation:(id*)arg1;
- (id)pep_onDetachedThread;
- (id)pep_onMainThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onOperationQueue:(id)arg1 priority:(int)arg2;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2;
- (id)pep_onThread:(id)arg1;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(BOOL)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
- (id)performSelector:(SEL)arg1;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)postNotificationWithDescription:(id)arg1;
- (void)registerForTimeMarkerNotificationsIfNecessary;
- (oneway void)release;
- (void)releaseOnMainThread;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)responderChainProxy:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)retainWeakReference;
- (id)safeValueForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;
- (int)selectionAffinity;
- (id)self;
- (void)setAccessibilityActivationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityElementsHidden:(BOOL)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilitySize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityViewIsModal:(BOOL)arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setIsAccessibilityScrollAncestor:(BOOL)arg1;
- (void)setIsAccessibilityWindow:(BOOL)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (id)storedAccessibilityActivationPoint;
- (id)storedAccessibilityElementsHidden;
- (id)storedAccessibilityFrame;
- (id)storedAccessibilityTraits;
- (id)storedAccessibilityViewIsModal;
- (id)storedIsAccessibilityElement;
- (Class)superclass;
- (id)threadDescription;
- (void)unregisterForTimeMarkerNotifications;
- (BOOL)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (BOOL)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3;
- (id)valueForBlock:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(BOOL)arg4 withObjects:(id)arg5;
- (id)valueForUndefinedKey:(id)arg1;
- (id)webThreadMainThreadProxy;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (struct _NSZone { }*)zone;

@end