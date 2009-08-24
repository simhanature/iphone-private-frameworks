/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <WebCore/WKTypes.h>
#import <WebCore/WKUtilities.h>
#import <GraphicsServices/GSEvent.h>

typedef struct {
	unsigned char pathIndex;
	unsigned char pathIdentity;
	unsigned char pathProximity;
	float pathPressure;
	float pathMajorRadius;
	CGPoint pathLocation;
	void* pathWindow;
} UIPathInfo;
typedef UIPathInfo XXStruct__FxRIA;

typedef struct {
	int _field1;
	unsigned short _field2;
	unsigned short _field3;
	float _field4;
	float _field5;
	float _field6;
	float _field7;
	float _field8;
	float _field9;
	unsigned char _field10;
	unsigned char _field11;
	XXStruct__FxRIA _field12[0];
} XXStruct_$jUSvD;

typedef struct __GSHeartbeat* GSHeartbeatRef;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
} XXStruct_iyXfGC;

typedef struct {
	CGRect left;
	CGRect middle;
	CGRect right;
} XXStruct_UUz0SD;

typedef struct {
	int _field1;
	int _field2;
	int _field3;
	int _field4;
	BOOL _field5;
	BOOL _field6;
} XXStruct_7U_TLD;

typedef struct {
	BOOL _field1;
	BOOL _field2;
	BOOL _field3;
	float _field4;
	float _field5;
	int _field6;
	CGRect _field7;
	CGRect _field8;
} XXStruct_TF$i3B;

typedef struct {
	XXStruct_UUz0SD top;
	XXStruct_UUz0SD middle;
	XXStruct_UUz0SD bottom;
} XXStruct_4cr1oD;

typedef struct {
	BOOL _field1;
	union {
		struct {
			id _field1;
			id _field2;
		} _field1;
		GSEventRef _field2;
	} _field2;
} XXStruct_CKAdxD;

@class UIView, UIImage;
typedef union {
	UIImage* image;
	UIView* view;
} XXUnion_a01swB;

typedef struct {
	float _field1;
	float _field2;
	float _field3;
} XXStruct_NwkmQC;

typedef struct USet* USetRef;

@class NSString;
typedef struct {
	CGRect _field1;
	CGRect _field2;
	CGRect _field3;
	CGRect _field4;
	CGRect _field5;
	NSString* _field6;
	NSString* _field7;
	unsigned _field8;
	unsigned _field9;
	unsigned _field10;
	id _field11;
} XXStruct_MMLx8B;

typedef XXStruct_MMLx8B XXStruct_K4qLnD;

typedef struct _WKClassInfo* WKClassInfoRef;

typedef struct TiledSurface* TiledSurfaceRef;

@class WAKWindow;
typedef struct WKWindow {
	WKObject _field1;
	WAKWindow* _field2;
	CGRect _field3;
	WKViewRef _field4;
	WKViewRef _field5;
	TiledSurfaceRef _field6;
	unsigned _field7 : 1;
	unsigned _field8 : 1;
} WKWindow;

typedef struct {
	double width;
	double height;
} XXStruct_meWoWB;

#pragma mark UIKBLength, for use in UIKBGeometry only.

enum UIKBLengthUnit {
	UIKBLengthUnitPixel = 1,
	UIKBLengthUnitPercentage = 2,
};

typedef struct {
	float amount;
	int unit;
} UIKBLength;

static inline UIKBLength UIKBLengthMakePixel(float x) {
	UIKBLength r;
	r.amount = x;
	r.unit = UIKBLengthUnitPixel;
	return r;
}
static inline UIKBLength UIKBLengthMakePercentage(float x) {
	UIKBLength r;
	r.amount = x;
	r.unit = UIKBLengthUnitPercentage;
	return r;
}
static const UIKBLength UIKBLengthZero = {0, 0};

#pragma mark -

typedef struct {
	id _field1;
	unsigned _field2;
} XXStruct_HeigOC;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct {
	id _field1;
	id _field2;
	id _field3;
	id _field4;
} XXStruct_Xx1ZfA;

typedef struct {
	int _field1;
	int _field2;
	id _field3;
	id _field4;
	float _field5;
	int _field6;
	SEL _field7;
	id _field8;
} XXStruct_b4LybD;

typedef struct UIKeyboardAnimationGeometry {
	CGPoint _field1;
	CGPoint _field2;
	CGRect _field3;
	CGAffineTransform _field4;
} UIKeyboardAnimationGeometry;

//---------

@class UIKBKeyboard, UIKBKey, NSArray, NSString, NSBundle;



/*! Draw the keyboard background in the specified rectangle.
 @param style iPhone-Standard or iPhone-Alert
 */
UIKIT_EXTERN void UIKBDrawKeyboardBackground(CGContextRef context, CGRect region, NSString* style);
/// Currently draws nothing.
UIKIT_EXTERN void UIKBDrawKeyboardOverlay(CGContextRef context, CGRect region, NSString* style);
UIKIT_EXTERN void UIKBDrawKey(CGContextRef context, UIKBKeyboard* keyboard, UIKBKey* key, int x);

UIKIT_EXTERN NSArray* UIKeyboardGetActiveInputModes();
UIKIT_EXTERN NSString* UIKeyboardGetCurrentInputMode();
UIKIT_EXTERN void UIKeyboardSetCurrentInputMode(NSString* mode);
UIKIT_EXTERN NSString* UIKeyboardLocalizedInputModeName(NSString* mode);
UIKIT_EXTERN NSString* UIKeyboardLocalizedString(NSString* theString, NSString* language, NSString* passNil);
UIKIT_EXTERN NSObject* UIKeyboardLocalizedObject(NSString* key, NSString* language, NSString* passNil, NSString* alsoPassNil);
UIKIT_EXTERN NSString* UIKeyboardGetCurrentUILanguage();
UIKIT_EXTERN NSArray* UIKeyboardGetSupportedInputModes();
UIKIT_EXTERN void UIKeyboardSetActiveInputModes(NSArray* modes);
UIKIT_EXTERN NSBundle* UIKeyboardBundleForInputMode(NSString* mode);

UIKIT_EXTERN NSString* UIKeyboardStringDismiss;
UIKIT_EXTERN NSString* UIKeyboardStringConfirm;
UIKIT_EXTERN NSString* UIKeyboardStringNextCandidate;
UIKIT_EXTERN NSString* UIKeyboardKeyReturn;
UIKIT_EXTERN NSString* UIKeyboardKeySpace;
	