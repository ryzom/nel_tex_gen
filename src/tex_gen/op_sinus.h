/** \file op_sinus.h
 * Sinus transformation of a picture
 *
 * $Id: $
 */

/* Copyright, 2003 DIGITAL MURDER.
 *
 * This file is part of DIGITAL MURDER NEL.
 * DIGITAL MURDER NEL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.

 * DIGITAL MURDER NEL is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with DIGITAL MURDER NEL; see the file COPYING. If not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
 * MA 02111-1307, USA.
 */

#ifndef NL_OP_SINUS
#define NL_OP_SINUS

#include "tex_gen_op.h"
#include "op_deform.h"


namespace NLTEXGEN
{

/**
 * Sinus transformation of a picture
 *
 * \author Cyril 'Hulud' Corvazier
 * \author DIGITAL MURDER
 * \date 2003
 */
class COpSinus : public COpDeform
{
public:

	enum TInput
	{
		LastInput,
	};

	enum TParameter
	{
		Length = COpDeform::LastParameter,	// Sinus length
		Period,								// Sinus period
		LastParameter,
	};

	// Ctor. Init inputs and parameters
	COpSinus();

	// \from COpDeform
	virtual TChannel modifyColor (CFloatBitmap &output, const CFloatBitmap &input, const CRenderParameter &renderParameters);

	// Streamable
	NLMISC_DECLARE_CLASS2(COpSinus, Si);

	// Clone operator
	NL_DECLARE_COPY_OPERATOR(COpSinus, ITexGenOperator);

protected:

};

// ***************************************************************************

} // NLTEXGEN


#endif // NL_OP_SINUS

/* End of op_sinus.h */
