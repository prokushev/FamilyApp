
/*
 *@@sourcefile iso8859_5.h:
 *      encoding translation for iso8859_5 to Unicode.
 *
 *@@added V0.9.9 (2001-02-10) [umoeller]
 */

XWPENCODINGMAP G_iso8859_5[] =
{
//
//    Name:             ISO 8859-5:1999 to Unicode
//    Unicode version:  3.0
//    Table version:    1.0
//    Table format:     Format A
//    Date:             1999 July 27
//    Authors:          Ken Whistler <kenw@sybase.com>
//
//    Copyright (c) 1991-1999 Unicode, Inc.  All Rights reserved.
//
//    This file is provided as-is by Unicode, Inc. (The Unicode Consortium).
//    No claims are made as to fitness for any particular purpose.  No
//    warranties of any kind are expressed or implied.  The recipient
//    agrees to determine applicability of information provided.  If this
//    file has been provided on optical media by Unicode, Inc., the sole
//    remedy for any claim will be exchange of defective media within 90
//    days of receipt.
//
//    Unicode, Inc. hereby grants the right to freely use the information
//    supplied in this file in the creation of products supporting the
//    Unicode Standard, and to make copies of this file in any form for
//    internal or external distribution as long as this notice remains
//    attached.
//
//    General notes:
//
//    This table contains the data the Unicode Consortium has on how
//        ISO/IEC 8859-5:1999 characters map into Unicode.
//
//    Format:  Three tab-separated columns
//         Column #1 is the ISO/IEC 8859-5 code (in hex as 0xXX)
//         Column #2 is the Unicode (in hex as 0xXXXX)
//         Column #3 the Unicode name (follows a comment sign, '#')
//
//    The entries are in ISO/IEC 8859-5 order.
//
//    Version history
//    1.0 version updates 0.1 version by adding mappings for all
//    control characters.
//
//    Updated versions of this file may be found in:
//        <ftp://ftp.unicode.org/Public/MAPPINGS/>
//
//    Any comments or problems, contact <errata@unicode.org>
//    Please note that <errata@unicode.org> is an archival address;
//    notices will be checked, but do not expect an immediate response.
//
    0x00, 0x0000, //    NULL
    0x01, 0x0001, //    START OF HEADING
    0x02, 0x0002, //    START OF TEXT
    0x03, 0x0003, //    END OF TEXT
    0x04, 0x0004, //    END OF TRANSMISSION
    0x05, 0x0005, //    ENQUIRY
    0x06, 0x0006, //    ACKNOWLEDGE
    0x07, 0x0007, //    BELL
    0x08, 0x0008, //    BACKSPACE
    0x09, 0x0009, //    HORIZONTAL TABULATION
    0x0A, 0x000A, //    LINE FEED
    0x0B, 0x000B, //    VERTICAL TABULATION
    0x0C, 0x000C, //    FORM FEED
    0x0D, 0x000D, //    CARRIAGE RETURN
    0x0E, 0x000E, //    SHIFT OUT
    0x0F, 0x000F, //    SHIFT IN
    0x10, 0x0010, //    DATA LINK ESCAPE
    0x11, 0x0011, //    DEVICE CONTROL ONE
    0x12, 0x0012, //    DEVICE CONTROL TWO
    0x13, 0x0013, //    DEVICE CONTROL THREE
    0x14, 0x0014, //    DEVICE CONTROL FOUR
    0x15, 0x0015, //    NEGATIVE ACKNOWLEDGE
    0x16, 0x0016, //    SYNCHRONOUS IDLE
    0x17, 0x0017, //    END OF TRANSMISSION BLOCK
    0x18, 0x0018, //    CANCEL
    0x19, 0x0019, //    END OF MEDIUM
    0x1A, 0x001A, //    SUBSTITUTE
    0x1B, 0x001B, //    ESCAPE
    0x1C, 0x001C, //    FILE SEPARATOR
    0x1D, 0x001D, //    GROUP SEPARATOR
    0x1E, 0x001E, //    RECORD SEPARATOR
    0x1F, 0x001F, //    UNIT SEPARATOR
    0x20, 0x0020, //    SPACE
    0x21, 0x0021, //    EXCLAMATION MARK
    0x22, 0x0022, //    QUOTATION MARK
    0x23, 0x0023, //    NUMBER SIGN
    0x24, 0x0024, //    DOLLAR SIGN
    0x25, 0x0025, //    PERCENT SIGN
    0x26, 0x0026, //    AMPERSAND
    0x27, 0x0027, //    APOSTROPHE
    0x28, 0x0028, //    LEFT PARENTHESIS
    0x29, 0x0029, //    RIGHT PARENTHESIS
    0x2A, 0x002A, //    ASTERISK
    0x2B, 0x002B, //    PLUS SIGN
    0x2C, 0x002C, //    COMMA
    0x2D, 0x002D, //    HYPHEN-MINUS
    0x2E, 0x002E, //    FULL STOP
    0x2F, 0x002F, //    SOLIDUS
    0x30, 0x0030, //    DIGIT ZERO
    0x31, 0x0031, //    DIGIT ONE
    0x32, 0x0032, //    DIGIT TWO
    0x33, 0x0033, //    DIGIT THREE
    0x34, 0x0034, //    DIGIT FOUR
    0x35, 0x0035, //    DIGIT FIVE
    0x36, 0x0036, //    DIGIT SIX
    0x37, 0x0037, //    DIGIT SEVEN
    0x38, 0x0038, //    DIGIT EIGHT
    0x39, 0x0039, //    DIGIT NINE
    0x3A, 0x003A, //    COLON
    0x3B, 0x003B, //    SEMICOLON
    0x3C, 0x003C, //    LESS-THAN SIGN
    0x3D, 0x003D, //    EQUALS SIGN
    0x3E, 0x003E, //    GREATER-THAN SIGN
    0x3F, 0x003F, //    QUESTION MARK
    0x40, 0x0040, //    COMMERCIAL AT
    0x41, 0x0041, //    LATIN CAPITAL LETTER A
    0x42, 0x0042, //    LATIN CAPITAL LETTER B
    0x43, 0x0043, //    LATIN CAPITAL LETTER C
    0x44, 0x0044, //    LATIN CAPITAL LETTER D
    0x45, 0x0045, //    LATIN CAPITAL LETTER E
    0x46, 0x0046, //    LATIN CAPITAL LETTER F
    0x47, 0x0047, //    LATIN CAPITAL LETTER G
    0x48, 0x0048, //    LATIN CAPITAL LETTER H
    0x49, 0x0049, //    LATIN CAPITAL LETTER I
    0x4A, 0x004A, //    LATIN CAPITAL LETTER J
    0x4B, 0x004B, //    LATIN CAPITAL LETTER K
    0x4C, 0x004C, //    LATIN CAPITAL LETTER L
    0x4D, 0x004D, //    LATIN CAPITAL LETTER M
    0x4E, 0x004E, //    LATIN CAPITAL LETTER N
    0x4F, 0x004F, //    LATIN CAPITAL LETTER O
    0x50, 0x0050, //    LATIN CAPITAL LETTER P
    0x51, 0x0051, //    LATIN CAPITAL LETTER Q
    0x52, 0x0052, //    LATIN CAPITAL LETTER R
    0x53, 0x0053, //    LATIN CAPITAL LETTER S
    0x54, 0x0054, //    LATIN CAPITAL LETTER T
    0x55, 0x0055, //    LATIN CAPITAL LETTER U
    0x56, 0x0056, //    LATIN CAPITAL LETTER V
    0x57, 0x0057, //    LATIN CAPITAL LETTER W
    0x58, 0x0058, //    LATIN CAPITAL LETTER X
    0x59, 0x0059, //    LATIN CAPITAL LETTER Y
    0x5A, 0x005A, //    LATIN CAPITAL LETTER Z
    0x5B, 0x005B, //    LEFT SQUARE BRACKET
    0x5C, 0x005C, //    REVERSE SOLIDUS
    0x5D, 0x005D, //    RIGHT SQUARE BRACKET
    0x5E, 0x005E, //    CIRCUMFLEX ACCENT
    0x5F, 0x005F, //    LOW LINE
    0x60, 0x0060, //    GRAVE ACCENT
    0x61, 0x0061, //    LATIN SMALL LETTER A
    0x62, 0x0062, //    LATIN SMALL LETTER B
    0x63, 0x0063, //    LATIN SMALL LETTER C
    0x64, 0x0064, //    LATIN SMALL LETTER D
    0x65, 0x0065, //    LATIN SMALL LETTER E
    0x66, 0x0066, //    LATIN SMALL LETTER F
    0x67, 0x0067, //    LATIN SMALL LETTER G
    0x68, 0x0068, //    LATIN SMALL LETTER H
    0x69, 0x0069, //    LATIN SMALL LETTER I
    0x6A, 0x006A, //    LATIN SMALL LETTER J
    0x6B, 0x006B, //    LATIN SMALL LETTER K
    0x6C, 0x006C, //    LATIN SMALL LETTER L
    0x6D, 0x006D, //    LATIN SMALL LETTER M
    0x6E, 0x006E, //    LATIN SMALL LETTER N
    0x6F, 0x006F, //    LATIN SMALL LETTER O
    0x70, 0x0070, //    LATIN SMALL LETTER P
    0x71, 0x0071, //    LATIN SMALL LETTER Q
    0x72, 0x0072, //    LATIN SMALL LETTER R
    0x73, 0x0073, //    LATIN SMALL LETTER S
    0x74, 0x0074, //    LATIN SMALL LETTER T
    0x75, 0x0075, //    LATIN SMALL LETTER U
    0x76, 0x0076, //    LATIN SMALL LETTER V
    0x77, 0x0077, //    LATIN SMALL LETTER W
    0x78, 0x0078, //    LATIN SMALL LETTER X
    0x79, 0x0079, //    LATIN SMALL LETTER Y
    0x7A, 0x007A, //    LATIN SMALL LETTER Z
    0x7B, 0x007B, //    LEFT CURLY BRACKET
    0x7C, 0x007C, //    VERTICAL LINE
    0x7D, 0x007D, //    RIGHT CURLY BRACKET
    0x7E, 0x007E, //    TILDE
    0x7F, 0x007F, //    DELETE
    0x80, 0x0080, //    <control>
    0x81, 0x0081, //    <control>
    0x82, 0x0082, //    <control>
    0x83, 0x0083, //    <control>
    0x84, 0x0084, //    <control>
    0x85, 0x0085, //    <control>
    0x86, 0x0086, //    <control>
    0x87, 0x0087, //    <control>
    0x88, 0x0088, //    <control>
    0x89, 0x0089, //    <control>
    0x8A, 0x008A, //    <control>
    0x8B, 0x008B, //    <control>
    0x8C, 0x008C, //    <control>
    0x8D, 0x008D, //    <control>
    0x8E, 0x008E, //    <control>
    0x8F, 0x008F, //    <control>
    0x90, 0x0090, //    <control>
    0x91, 0x0091, //    <control>
    0x92, 0x0092, //    <control>
    0x93, 0x0093, //    <control>
    0x94, 0x0094, //    <control>
    0x95, 0x0095, //    <control>
    0x96, 0x0096, //    <control>
    0x97, 0x0097, //    <control>
    0x98, 0x0098, //    <control>
    0x99, 0x0099, //    <control>
    0x9A, 0x009A, //    <control>
    0x9B, 0x009B, //    <control>
    0x9C, 0x009C, //    <control>
    0x9D, 0x009D, //    <control>
    0x9E, 0x009E, //    <control>
    0x9F, 0x009F, //    <control>
    0xA0, 0x00A0, //    NO-BREAK SPACE
    0xA1, 0x0401, //    CYRILLIC CAPITAL LETTER IO
    0xA2, 0x0402, //    CYRILLIC CAPITAL LETTER DJE
    0xA3, 0x0403, //    CYRILLIC CAPITAL LETTER GJE
    0xA4, 0x0404, //    CYRILLIC CAPITAL LETTER UKRAINIAN IE
    0xA5, 0x0405, //    CYRILLIC CAPITAL LETTER DZE
    0xA6, 0x0406, //    CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I
    0xA7, 0x0407, //    CYRILLIC CAPITAL LETTER YI
    0xA8, 0x0408, //    CYRILLIC CAPITAL LETTER JE
    0xA9, 0x0409, //    CYRILLIC CAPITAL LETTER LJE
    0xAA, 0x040A, //    CYRILLIC CAPITAL LETTER NJE
    0xAB, 0x040B, //    CYRILLIC CAPITAL LETTER TSHE
    0xAC, 0x040C, //    CYRILLIC CAPITAL LETTER KJE
    0xAD, 0x00AD, //    SOFT HYPHEN
    0xAE, 0x040E, //    CYRILLIC CAPITAL LETTER SHORT U
    0xAF, 0x040F, //    CYRILLIC CAPITAL LETTER DZHE
    0xB0, 0x0410, //    CYRILLIC CAPITAL LETTER A
    0xB1, 0x0411, //    CYRILLIC CAPITAL LETTER BE
    0xB2, 0x0412, //    CYRILLIC CAPITAL LETTER VE
    0xB3, 0x0413, //    CYRILLIC CAPITAL LETTER GHE
    0xB4, 0x0414, //    CYRILLIC CAPITAL LETTER DE
    0xB5, 0x0415, //    CYRILLIC CAPITAL LETTER IE
    0xB6, 0x0416, //    CYRILLIC CAPITAL LETTER ZHE
    0xB7, 0x0417, //    CYRILLIC CAPITAL LETTER ZE
    0xB8, 0x0418, //    CYRILLIC CAPITAL LETTER I
    0xB9, 0x0419, //    CYRILLIC CAPITAL LETTER SHORT I
    0xBA, 0x041A, //    CYRILLIC CAPITAL LETTER KA
    0xBB, 0x041B, //    CYRILLIC CAPITAL LETTER EL
    0xBC, 0x041C, //    CYRILLIC CAPITAL LETTER EM
    0xBD, 0x041D, //    CYRILLIC CAPITAL LETTER EN
    0xBE, 0x041E, //    CYRILLIC CAPITAL LETTER O
    0xBF, 0x041F, //    CYRILLIC CAPITAL LETTER PE
    0xC0, 0x0420, //    CYRILLIC CAPITAL LETTER ER
    0xC1, 0x0421, //    CYRILLIC CAPITAL LETTER ES
    0xC2, 0x0422, //    CYRILLIC CAPITAL LETTER TE
    0xC3, 0x0423, //    CYRILLIC CAPITAL LETTER U
    0xC4, 0x0424, //    CYRILLIC CAPITAL LETTER EF
    0xC5, 0x0425, //    CYRILLIC CAPITAL LETTER HA
    0xC6, 0x0426, //    CYRILLIC CAPITAL LETTER TSE
    0xC7, 0x0427, //    CYRILLIC CAPITAL LETTER CHE
    0xC8, 0x0428, //    CYRILLIC CAPITAL LETTER SHA
    0xC9, 0x0429, //    CYRILLIC CAPITAL LETTER SHCHA
    0xCA, 0x042A, //    CYRILLIC CAPITAL LETTER HARD SIGN
    0xCB, 0x042B, //    CYRILLIC CAPITAL LETTER YERU
    0xCC, 0x042C, //    CYRILLIC CAPITAL LETTER SOFT SIGN
    0xCD, 0x042D, //    CYRILLIC CAPITAL LETTER E
    0xCE, 0x042E, //    CYRILLIC CAPITAL LETTER YU
    0xCF, 0x042F, //    CYRILLIC CAPITAL LETTER YA
    0xD0, 0x0430, //    CYRILLIC SMALL LETTER A
    0xD1, 0x0431, //    CYRILLIC SMALL LETTER BE
    0xD2, 0x0432, //    CYRILLIC SMALL LETTER VE
    0xD3, 0x0433, //    CYRILLIC SMALL LETTER GHE
    0xD4, 0x0434, //    CYRILLIC SMALL LETTER DE
    0xD5, 0x0435, //    CYRILLIC SMALL LETTER IE
    0xD6, 0x0436, //    CYRILLIC SMALL LETTER ZHE
    0xD7, 0x0437, //    CYRILLIC SMALL LETTER ZE
    0xD8, 0x0438, //    CYRILLIC SMALL LETTER I
    0xD9, 0x0439, //    CYRILLIC SMALL LETTER SHORT I
    0xDA, 0x043A, //    CYRILLIC SMALL LETTER KA
    0xDB, 0x043B, //    CYRILLIC SMALL LETTER EL
    0xDC, 0x043C, //    CYRILLIC SMALL LETTER EM
    0xDD, 0x043D, //    CYRILLIC SMALL LETTER EN
    0xDE, 0x043E, //    CYRILLIC SMALL LETTER O
    0xDF, 0x043F, //    CYRILLIC SMALL LETTER PE
    0xE0, 0x0440, //    CYRILLIC SMALL LETTER ER
    0xE1, 0x0441, //    CYRILLIC SMALL LETTER ES
    0xE2, 0x0442, //    CYRILLIC SMALL LETTER TE
    0xE3, 0x0443, //    CYRILLIC SMALL LETTER U
    0xE4, 0x0444, //    CYRILLIC SMALL LETTER EF
    0xE5, 0x0445, //    CYRILLIC SMALL LETTER HA
    0xE6, 0x0446, //    CYRILLIC SMALL LETTER TSE
    0xE7, 0x0447, //    CYRILLIC SMALL LETTER CHE
    0xE8, 0x0448, //    CYRILLIC SMALL LETTER SHA
    0xE9, 0x0449, //    CYRILLIC SMALL LETTER SHCHA
    0xEA, 0x044A, //    CYRILLIC SMALL LETTER HARD SIGN
    0xEB, 0x044B, //    CYRILLIC SMALL LETTER YERU
    0xEC, 0x044C, //    CYRILLIC SMALL LETTER SOFT SIGN
    0xED, 0x044D, //    CYRILLIC SMALL LETTER E
    0xEE, 0x044E, //    CYRILLIC SMALL LETTER YU
    0xEF, 0x044F, //    CYRILLIC SMALL LETTER YA
    0xF0, 0x2116, //    NUMERO SIGN
    0xF1, 0x0451, //    CYRILLIC SMALL LETTER IO
    0xF2, 0x0452, //    CYRILLIC SMALL LETTER DJE
    0xF3, 0x0453, //    CYRILLIC SMALL LETTER GJE
    0xF4, 0x0454, //    CYRILLIC SMALL LETTER UKRAINIAN IE
    0xF5, 0x0455, //    CYRILLIC SMALL LETTER DZE
    0xF6, 0x0456, //    CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I
    0xF7, 0x0457, //    CYRILLIC SMALL LETTER YI
    0xF8, 0x0458, //    CYRILLIC SMALL LETTER JE
    0xF9, 0x0459, //    CYRILLIC SMALL LETTER LJE
    0xFA, 0x045A, //    CYRILLIC SMALL LETTER NJE
    0xFB, 0x045B, //    CYRILLIC SMALL LETTER TSHE
    0xFC, 0x045C, //    CYRILLIC SMALL LETTER KJE
    0xFD, 0x00A7, //    SECTION SIGN
    0xFE, 0x045E, //    CYRILLIC SMALL LETTER SHORT U
    0xFF, 0x045F  //    CYRILLIC SMALL LETTER DZHE
};

